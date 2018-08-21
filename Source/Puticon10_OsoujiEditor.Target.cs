// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Puticon10_OsoujiEditorTarget : TargetRules
{
	public Puticon10_OsoujiEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Puticon10_Osouji" } );
	}
}
