#pragma once
#include "yaScript.h"

namespace ya
{

	class PlayerScript : public Script
	{
	public:
		PlayerScript();
		virtual ~PlayerScript();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render() override;

		static Vector3 GetPosition()
		{
			return mPlayerPos;
		}

	private:
		static Vector3 mPlayerPos;
	};

}
