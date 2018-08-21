// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Puticon10_OsoujiTarget : TargetRules
{
	public Puticon10_OsoujiTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Puticon10_Osouji" } );
	}
}
