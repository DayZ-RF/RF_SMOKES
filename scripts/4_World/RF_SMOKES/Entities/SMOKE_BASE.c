class RF_SMOKES_SMOKE_BASE: Inventory_Base {
	
	// MARK: - Private Properties

    Particle m_ParticleSmoke;
	
	// MARK: - Life Cycle

    void RF_SMOKES_SMOKE_BASE() {
        Print(this.ToString());
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(setup, 100, false);
    }

    void ~RF_SMOKES_SMOKE_BASE() {
        Print("~" + this.ToString());
    }

	// MARK: - Internal

	int GetParticleId() { return 0; }
	
	// MARK: - Override

    override bool IsInventoryVisible() { return false; }
    override bool CanPutIntoHands(EntityAI parent) { return false; }
    override bool CanPutInCargo(EntityAI parent) {  return false; }

    override void EEDelete(EntityAI parent) {
        super.EEDelete(parent);
        if (m_ParticleSmoke)
        	m_ParticleSmoke.Stop();
    }
	
	// MARK: - Private
	
	private void setup() {
		if (!GetGame().IsClient()) return;
		m_ParticleSmoke = Particle.PlayInWorld(GetParticleId(), GetPosition());
	}
}