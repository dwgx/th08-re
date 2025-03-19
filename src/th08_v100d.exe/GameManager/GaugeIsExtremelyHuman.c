
bool __thiscall th08::GameManager::GaugeIsExtremelyHuman(GameManager *this)

{
  return this->m_Globals->m_YoukaiGauge <= this->youkaiGaugeHumanEffectsThreshold;
}

