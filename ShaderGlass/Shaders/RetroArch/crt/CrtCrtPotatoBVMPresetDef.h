/*
ShaderGlass preset crt / crt-potato-BVM imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/23046258f7fd02242cc6dd4c08c997a8ddb84935/crt/crt-potato-BVM.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtPotatoBVMPresetDef : public PresetDef
{
public:
	CrtCrtPotatoBVMPresetDef() : PresetDef{}
	{
		Name = "crt-potato-BVM";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtPotatoShaderFilesUltra_potatoShaderDef()
.Param("alias", "PASS0")
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(CrtShadersCrtPotatoResourcesMask1TextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "MASK")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
