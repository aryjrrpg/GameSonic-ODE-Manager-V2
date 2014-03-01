#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <ppu-types.h>

/* REMEMBER INCLUDE YOUR NEW STRIGNS
   IN language.c - lang_strings */

enum lang_codes 
{
    //MAIN
    //VIDEO - ADJUST
    VIDEOADJUST_POSITION,
    VIDEOADJUST_SCALEINFO,
    VIDEOADJUST_EXITINFO,
    VIDEOADJUST_DEFAULTS,

    // SELECT - GAME FOLDER
    GAMEFOLDER_WANTUSE,
    GAMEFOLDER_TOINSTALLNTR,
    GAMEFOLDER_USING,
    GAMEFOLDER_TOINSTALL,
    
    //DRAW SCREEN1
    DRAWSCREEN_FAVSWAP,
    DRAWSCREEN_FAVINSERT,
    DRAWSCREEN_FAVORITES,
    DRAWSCREEN_PAGE,
    DRAWSCREEN_GAMES,
    DRAWSCREEN_PLAY,
    DRAWSCREEN_SOPTIONS,
    DRAWSCREEN_SDELETE,
    DRAWSCREEN_STGLOPT,
    DRAWSCREEN_EXITXMB,
    DRAWSCREEN_RESTART,
    DRAWSCREEN_CANRUNFAV,
    DRAWSCREEN_MARKNOTEXEC,
    DRAWSCREEN_MARKNOTEX4G,
    DRAWSCREEN_GAMEINOFMNT,
    DRAWSCREEN_GAMEIASKDIR,
    DRAWSCREEN_GAMEICANTFD,
    DRAWSCREEN_GAMEIWLAUNCH,
    DRAWSCREEN_EXTEXENOTFND,
    DRAWSCREEN_EXTEXENOTCPY,
    DRAWSCREEN_REQBR,
    DRAWSCREEN_PARCONTROL,
    DRAWSCREEN_GAMESIZE,
    DRAWSCREEN_EJECTINFO,
    DRAWSCREEN_MCUOLD,
    DRAWSCREEN_COPYGAME,
	
    //DRAW OPTIONS
    DRAWGMOPT_OPTS,
    DRAWGMOPT_CFGGAME,
    DRAWGMOPT_CPYGAME,
    DRAWGMOPT_DELGAME,
    DRAWGMOPT_FIXGAME,
    DRAWGMOPT_TSTGAME,
    DRAWGMOPT_CPYEBOOTGAME,
    DRAWGMOPT_CPYTOFAV,
    DRAWGMOPT_DELFMFAV,

    DRAWGMOPT_FIXCOMPLETE,
    DRAWGMOPT_CPYOK,
    DRAWGMOPT_CPYERR,
    DRAWGMOPT_CPYNOTFND,

    //DRAW CONFIGS
    DRAWGMCFG_CFGS,
    DRAWGMCFG_DSK,
    DRAWGMCFG_NO,
    DRAWGMCFG_YES,
    DRAWGMCFG_UPD,
    DRAWGMCFG_ON,
    DRAWGMCFG_OFF,
    DRAWGMCFG_EXTBOOT,
    DRAWGMCFG_BDEMU,
    DRAWGMCFG_EXTHDD0GAME,
    DRAWGMCFG_SAVECFG,

    //DRAW GLOBAL OPTIONS
    DRAWGLOPT_OPTS,
    DRAWGLOPT_SETVIDEO,
    DRAWGLOPT_CHANGEDIR,
    DRAWGLOPT_SWMUSICOFF,
    DRAWGLOPT_SWMUSICON,
    DRAWGLOPT_TOOLS,
    DRAWGLOPT_CREDITS,
    DRAWGLOPT_NETOOLS,
    DRAWGLOPT_SCRADJUST,
    DRAWGLOPT_CHANGEBCK,
    DRAWGLOPT_CHANGEBCKHERMES,
    DRAWGLOPT_GRID8x6,
    DRAWGLOPT_GRID6x4,
    DRAWGLOPT_GRID4x3,
    DRAWGLOPT_INITFTP,
    DRAWGLOPT_FTPINITED,
    DRAWGLOPT_FTPARINITED,
    DRAWGLOPT_FTPSTOPED,
    DRAWGLOPT_INSERTUSB,
	DRAWGLOPT_BROWSER,
    
    //DRAW SETUP VIDEO
    DRAWSETVID_SETVIDEO,
    DRAWSETVID_SCRADJUST,
    DRAWSETVID_CHANGEBCK,
    DRAWSETVID_CHANGEBCKHERMES,
	DRAWSETVID_GRID8x6,
    DRAWSETVID_GRID6x4,
    DRAWSETVID_GRID4x3,
    
    //DRAW NETWORK TOOLS
    DRAWNETOOLS_NETOOLS,
    DRAWNETOOLS_SETIDPS,
    DRAWNETOOLS_DEFIDPS,
    DRAWNETOOLS_INITFTP,
    DRAWNETOOLS_FTPINITED,
    DRAWNETOOLS_FTPARINITED,
    DRAWNETOOLS_FTPSTOPED,
    DRAWNETOOLS_IDNOTVALID,
    DRAWNETOOLS_INSERTID,
    DRAWNETOOLS_IDPSPER,
    DRAWNETOOLS_IDPSOK,
    DRAWNETOOLS_DEFSTILLSET,
    DRAWNETOOLS_THISISYOURDEF,
    
    //DRAW FTP ERRORS
    DRAWFTP_ENETINITIALIZE,
    DRAWFTP_ENETCTLINIT,
    DRAWFTP_ENETCTLGETINFO,
    DRAWFTP_ECONNECTION,
    DRAWFTP_EUNKNOWN,
    DRAWFTP_EINTACTIVITY,

    //DRAW TOOLS
    DRAWTOOLS_TOOLS,
    DRAWTOOLS_DELCACHE,
    DRAWTOOLS_SECDISABLE,
    DRAWTOOLS_SECENABLE,
    DRAWTOOLS_PKGTOOLS,
    DRAWTOOLS_COPYFROM,
    DRAWTOOLS_WITHBDVD,
    DRAWTOOLS_NOBDVD,
	DRAWTOOLS_NOBDVD2,
    DRAWTOOLS_FIXFWVERPSNUPD,
	DRAWTOOLS_FIXFWVERPSNUPDWAIT,
    DRAWTOOLS_FIXFWVERPSNUPDOK,
	DRAWTOOLS_ARCHIVEMAN,

    //MAIN - OTHERS
    DRAWCACHE_CACHE,
    DRAWCACHE_ERRNEEDIT,
    DRAWCACHE_ASKTODEL,
    PATCHBEMU_ERRNOUSB,
    MOVEOBEMU_ERRSAVE,
    MOVEOBEMU_ERRMOVE,
    MOVEOBEMU_MOUNTOK,
    MOVETBEMU_ERRMOVE,

    //MAIN - GLOBAL
    GLOBAL_RETURN,
    GLOBAL_SAVED,


    //UTILS
    //FAST COPY ADD
    FASTCPADD_FAILED,
    FASTCPADD_ERRTMFILES,
    FASTCPADD_FAILEDSTAT,
    FASTCPADD_ERROPEN,
    FASTCPADD_COPYING,
    FASTCPADD_FAILFASTFILE,

    //FAST COPY PROCESS
    FASTCPPRC_JOINFILE,
    FASTCPPRC_COPYFILE,
    FASTCPPTC_OPENERROR,

    //GAME TEST FILES
    GAMETESTS_FOUNDINSTALL,
    GAMETESTS_BIGFILE,
    GAMETESTS_TESTFILE,
    GAMETESTS_CHECKSIZE,

    //GAME DELETE FILES
    GAMEDELFL_DELETED,
    GAMEDELFL_DELETING,

    //GAME COPY
    GAMECPYSL_GSIZEABCNTASK,
    GAMECPYSL_STARTED,
    GAMECPYSL_SPLITEDHDDNFO,
    GAMECPYSL_SPLITEDUSBNFO,
    GAMECPYSL_DONE,
    GAMECPYSL_FAILDELDUMP,
    GAMECPYSL_NOSPACEONUSB,
    GAMECPYSL_NOBDVD,

    //GAME CACHE COPY
    GAMECHCPY_ISNEEDONEFILE,
    GAMECHCPY_NEEDMORESPACE,
    GAMECHCPY_NOSPACE,
    GAMECHCPY_CACHENFOSTART,
    GAMECHCPY_FAILDELFROM,

    //GAME DELETE
    GAMEDELSL_WANTDELETE,
    GAMEDELSL_STARTED,
    GAMEDELSL_DONE,

    //GAME TEST
    GAMETSTSL_FINALNFO,
    GAMETSTSL_FINALNFO2,
    GAMETSTSL_TESTED,

    //GLOBAL UTILS
    GLUTIL_SPLITFILE,
    GLUTIL_WROTE,
    GLUTIL_TIME,
    GLUTIL_TIMELEFT,
    GLUTIL_HOLDTRIANGLEAB,
    GLUTIL_HOLDTRIANGLESK,
    GLUTIL_ABORTEDUSER,
    GLUTIL_ABORTED,
    GLUTIL_XEXIT,
    GLUTIL_WANTCPYFROM,
    GLUTIL_WTO,
    
    //DRAW_PSX
    DRAWPSX_EMULATOR,
    DRAWPSX_VIDEOPS,
    DRAWPSX_SAVEASK,
    DRAWPSX_SAVED,
    DRAWPSX_VIDEOTHER,
    DRAWPSX_VIDEOMODE,
    DRAWPSX_VIDEOASP,
    DRAWPSX_FULLSCR,
    DRAWPSX_SMOOTH,
    DRAWPSX_EXTROM,
    DRAWPSX_FORMAT,
    DRAWPSX_ASKFORMAT,
    DRAWPSX_ERRWRITING,
    DRAWPSX_BUILDISO,
    DRAWPSX_ASKCHEATS,
    DRAWPSX_ERRCHEATS,
    DRAWPSX_ERRSECSIZE,
    DRAWPSX_ERRUNKSIZE,
    DRAWPSX_DISCEJECT,
    DRAWPSX_DISCORDER,
    DRAWPSX_PRESSOB,
    DRAWPSX_PRESSXB,
    DRAWPSX_CHEATMAKE,
    DRAWPSX_COPYMC,
    DRAWPSX_ERRCOPYMC,
    DRAWPSX_PUTFNAME,
    DRAWPSX_FMUSTB,
    DRAWPSX_PUTADISC,
    DRAWPSX_UNREC,
    DRAWPSX_ERROPENING,
    DRAWPSX_ASKEFOLDER,
    DRAWPSX_ISOEXITS,

    // Language

	DRAWGLOPT_LANGUAGE_1,
    DRAWGLOPT_LANGUAGE_2,
    DRAWGLOPT_LANGUAGE_3,
    DRAWGLOPT_LANGUAGE_4,
    DRAWGLOPT_LANGUAGE_5,
    DRAWGLOPT_LANGUAGE_6,
    DRAWGLOPT_LANGUAGE_7,
    DRAWGLOPT_LANGUAGE_8,
    DRAWGLOPT_LANGUAGE_9,
    DRAWGLOPT_LANGUAGE_10,
    DRAWGLOPT_LANGUAGE_11,

    // Install .PKG
    PKG_HEADER,
    PKG_INSERTUSB,
    PKG_ERRTOBIG,
    PKG_WANTINSTALL,
    PKG_ERRALREADY,
    PKG_ERRFULLSTACK,
    PKG_ERRBUILD,
    PKG_COPYING,
    PKG_ERROPENING,
    PKG_ERRCREATING,
    PKG_ERRREADING,
    PKG_ERRLICON,
    PKG_ERRMOVING,
       
    //generic
    OUT_OFMEMORY,
    OPERATION_DONE,
    PLUG_STORAGE1,
    PLUG_STORAGE2,
    PAYLOAD_MAPFAILED,
    PAYLOAD_FWUNSUPPORTED,
    WARN_EJECTLOADISC,
    WARN_DISCFAILED,
    PATCH09_WAITGAME,
    PATCH09_WAITUPDATE,
    PATCH09_REBUILDGAME,
    PATCH09_REBUILDUPDATE,
 
    //END
    LANGSTRINGS_COUNT,
 
};


int open_language (int lang, char * filename);
u32 get_system_language( u16 *lang );
void close_language(void);

#endif
