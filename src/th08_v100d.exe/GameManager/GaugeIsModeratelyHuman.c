
bool __thiscall th08::GameManager::GaugeIsModeratelyHuman(GameManager *this)

{
  return this->m_Globals->m_YoukaiGauge <= this->youkaiGaugeHumanTintThreshold;
}

