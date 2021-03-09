class anpeqLight extends SpotLightBase
{
	private static float m_DefaultBrightness = 10;
	private static float m_DefaultRadius = 60;
	
	void anpeqLight()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo(m_DefaultRadius);
		SetSpotLightAngle(45);
		SetCastShadow(true);
		SetBrightnessTo(m_DefaultBrightness);
		SetFadeOutTime(0.05);
		SetAmbientColor(1, 1, 1);
		SetDiffuseColor(1, 1, 1);
	}
	
	void SetIntensity( float coef, float time )
	{
		FadeBrightnessTo(m_DefaultBrightness * coef, time);
		FadeRadiusTo(m_DefaultRadius * coef, time);
	}
}