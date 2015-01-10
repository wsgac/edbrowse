/* messages.h
 * This file is part of the edbrowse project, released under GPL.
 */

/*********************************************************************
Symbolic constants for message numbers.
These become the indexes for the messages in message.c.
The array of messages is selected by the language.

This file and messages.c line up.
In other words, the constant at line 100 of messages.h corresponds
to the English string at line 100 of messages.c.
to keep this alignment, even if you run this file through indent,
this comment block is just the right size.
*
*
*
*
*
*
*
*
*********************************************************************/

enum {
	MSG_EndFile,
	MSG_NoFile,
	MSG_None,
	MSG_SubGlobal,
	MSG_SubLocal,
	MSG_CaseIns,
	MSG_CaseSen,
	MSG_DirReadonly,
	MSG_DirWritable,
	MSG_DirX,
	MSG_RedirectionOff,
	MSG_RedirectionOn,
	MSG_RefererOff,
	MSG_RefererOn,
	MSG_JavaOff,
	MSG_JavaOn,
	MSG_BinaryIgnore,
	MSG_BinaryDetect,
	MSG_PassiveMode,
	MSG_ActiveMode,
	MSG_JSCloseSessions,
	MSG_CertifyOff,
	MSG_CertifyOn,
	MSG_HiddenOff,
	MSG_HiddenOn,
	MSG_JSEngineFork,
	MSG_JSEngineExec,
	MSG_MarkOff,
	MSG_MarkList,
	MSG_MarkOn,
	MSG_NJNoAction,
	MSG_NJGoing,
	MSG_RedirectionInterrupted,
	MSG_Empty,
	MSG_SessionNew,
	MSG_NoTrailing,
	MSG_DirMode,
	MSG_BinaryData,
	MSG_OK,
	MSG_BinaryBrackets,
	MSG_NoTitle,
	MSG_NoDesc,
	MSG_NoKeywords,
	MSG_SessionX,
	MSG_MailHowto,
	MSG_LineUpdated,
	MSG_NoSubject,
	MSG_NoConfig,
	MSG_NoSubjFilter,
	MSG_EnterInterrupt,
	MSG_Ready,
	MSG_EnterNull,
	MSG_WebAuthorize,
	MSG_RedirectMany,
	MSG_Success,
	MSG_Directory,
	MSG_RedirectDelayed,
	MSG_UserName,
	MSG_UserNameLong,
	MSG_Password,
	MSG_PasswordLong,
	MSG_JSEnginePipe,
	MSG_NoDirNoList,
	MSG_ErrorMessageLong,
	MSG_LineX,
	MSG_BrowseError,
	MSG_NoSideBuffer,
	MSG_NoOptions,
	MSG_FormReset,
	MSG_FormSubmit,
	MSG_SideBufferX,
	MSG_Many,
	MSG_Recommended,
	MSG_Close,
	MSG_NoOptionsMatch,
	MSG_MailSending,
	MSG_MailSent,
	MSG_Junk,
	MSG_Quit,
	MSG_Next,
	MSG_Delete,
	MSG_IPDelete,
	MSG_POption,
	MSG_JSEngineRun,
	MSG_EndMessage,
	MSG_NYI,
	MSG_FileName,
	MSG_FileExists,
	MSG_Abbreviated,
	MSG_AttEmpty,
	MSG_Att,
	MSG_AttNoBuffer,
	MSG_AttNoCopy,
	MSG_AttNoSave,
	MSG_AttNoWrite,
	MSG_NoMail,
	MSG_MessagesX,
	MSG_JSEngineSync,
	MSG_From,
	MSG_MailHelp,
	MSG_NoCreate,
	MSG_NoWrite,
	MSG_MailSaved,
	MSG_Appended,
	MSG_PageDone,
	MSG_InnerText,
	MSG_NoErrors,
	MSG_ProxyAuth,
	MSG_SessionInactive,
	MSG_Session0,
	MSG_SessionHigh,
	MSG_SessionCurrent,
	MSG_ExpectW,
	MSG_ExpectWX,
	MSG_LineLimit,
	MSG_PathNameLong,
	MSG_DirNoWrite,
	MSG_NoRecycle,
	MSG_NoRemove,
	MSG_NoMoveToTrash,
	MSG_DestInBlock,
	MSG_NoChange,
	MSG_Join1,
	MSG_DBOtherFile,
	MSG_DBOtherTable,
	MSG_MissingFileName,
	MSG_DomainEmpty,
	MSG_NoWriteURL,
	MSG_WriteDB,
	MSG_WriteEmpty,
	MSG_NoCreate2,
	MSG_NoWrite2,
	MSG_SessionBackground,
	MSG_OutOfRange,
	MSG_ShellNull,
	MSG_NoLabel,
	MSG_BadDelimit,
	MSG_NoSearchString,
	MSG_NoReplaceString,
	MSG_RexpLong,
	MSG_LineBackslash,
	MSG_UnexpectedRight,
	MSG_RexpDollar,
	MSG_RexpModifier,
	MSG_NoBracket,
	MSG_NoParen,
	MSG_EmptyBuffer,
	MSG_RexpError,
	MSG_RexpError2,
	MSG_NotFound,
	MSG_LineHigh,
	MSG_LineLow,
	MSG_RexpMissing,
	MSG_NoDelimit,
	MSG_NoMatchG,
	MSG_AllMatchV,
	MSG_NotModifiedG,
	MSG_Interrupted,
	MSG_NoMatch,
	MSG_JSEngineVars,
	MSG_NoAgent,
	MSG_CDGetError,
	MSG_CDSetError,
	MSG_CDInvalid,
	MSG_AudioEmpty,
	MSG_AudioBrowse,
	MSG_AudioDir,
	MSG_AudioDB,
	MSG_NoSuffix,
	MSG_SuffixLong,
	MSG_SuffixBad,
	MSG_NoRefresh,
	MSG_NoDB,
	MSG_NoBrowse,
	MSG_NoSlash,
	MSG_YesSlash,
	MSG_SMBadChar,
	MSG_BalanceChar,
	MSG_BalanceNoOpen,
	MSG_BalanceAmbig,
	MSG_BalanceNothing,
	MSG_Unbalanced,
	MSG_SessionBrowse,
	MSG_SessionDir,
	MSG_NoFileName,
	MSG_EndBuffer,
	MSG_EndJoin,
	MSG_BadRange,
	MSG_BreakDir,
	MSG_BreakDB,
	MSG_BreakBrowse,
	MSG_UnknownCommand,
	MSG_DirCommand,
	MSG_DBCommand,
	MSG_BrowseCommand,
	MSG_AtLine0,
	MSG_NoSpaceAfter,
	MSG_GlobalCommand,
	MSG_BadDest,
	MSG_TextAfter,
	MSG_NoUndo,
	MSG_EnterKAZ,
	MSG_RangeLabel,
	MSG_Backup0,
	MSG_NoBufferExtraWindow,
	MSG_QAfter,
	MSG_DirRename,
	MSG_TableRename,
	MSG_BufferAppend,
	MSG_NoFileSpecified,
	MSG_NoDirWrite,
	MSG_NoDBWrite,
	MSG_ArrowAfter,
	MSG_NoPrevious,
	MSG_MAfter,
	MSG_NoDestSession,
	MSG_NoBackup,
	MSG_RangeG,
	MSG_DBG,
	MSG_RangeI,
	MSG_IG,
	MSG_BufferXEmpty,
	MSG_BufferXLines,
	MSG_NoOpen,
	MSG_NoRead,
	MSG_InputNull,
	MSG_InputCR,
	MSG_FirstLineLong,
	MSG_AlreadyInBuffer,
	MSG_BrowseBinary,
	MSG_BrowseEmpty,
	MSG_Unbrowsable,
	MSG_BrowseAlready,
	MSG_NoLable2,
	MSG_BrowseI,
	MSG_InsertFunction,
	MSG_JSEngineRW,
	MSG_CNYI,
	MSG_XOutOfRange,
	MSG_OptMatchNone,
	MSG_OptMatchMany,
	MSG_IsButton,
	MSG_SubmitButton,
	MSG_ResetButton,
	MSG_Textarea,
	MSG_Readonly,
	MSG_InputNewline,
	MSG_InputLong,
	MSG_InputRadio,
	MSG_ClearRadio,
	MSG_FileAccess,
	MSG_NumberExpected,
	MSG_SessionNull,
	MSG_FilePost,
	MSG_NoButton,
	MSG_NotInForm,
	MSG_ButtonNoJS,
	MSG_FormNoURL,
	MSG_FormBadURL,
	MSG_NJNoForm,
	MSG_BecameInsecure,
	MSG_SubmitProtBad,
	MSG_InputRange,
	MSG_InputRange2,
	MSG_ManyEmptyStrings,
	MSG_DownAbort,
	MSG_RexpMissing2,
	MSG_SubNumbersMany,
	MSG_SubSuffixBad,
	MSG_SubNumberG,
	MSG_BreakLong,
	MSG_ReplaceNewline,
	MSG_ReplaceNull,
	MSG_DirNameBad,
	MSG_DestFileExists,
	MSG_NoRename,
	MSG_InputNull2,
	MSG_InputNewline2,
	MSG_NoInputFields,
	MSG_NoLinks,
	MSG_NoButtons,
	MSG_ManyInputFields,
	MSG_ManyLinks,
	MSG_ManyButtons,
	MSG_WebRead,
	MSG_BadURL,
	MSG_DownSuccess,
	MSG_IdentifyHost,
	MSG_WebProtBad,
	MSG_BufferPreload,
	MSG_DownProgress,
	MSG_WebConnect,
	MSG_Down,
	MSG_NoCertify,
	MSG_NewLines,
	MSG_ImapReadHelp,
	MSG_Authorize2,
	MSG_LoginAbort,
	MSG_ImapTopHelp,
	MSG_TempNoWrite,
	MSG_DownForeground,
	MSG_DownBackground,
	MSG_NotUsed328,
	MSG_NotUsed329,
	MSG_FTPConnect,
	MSG_FTPConnectTime,
	MSG_FTPTransfer,
	MSG_FTPTransferTime,
	MSG_NotUsed334,
	MSG_NotUsed335,
	MSG_FTPBadURL,
	MSG_NotUsed337,
	MSG_NotUsed338,
	MSG_NotUsed339,
	MSG_FTPSession,
	MSG_NotUsed341,
	MSG_DBNotCompiled,
	MSG_ABNoAlias,
	MSG_ABNoColon,
	MSG_ABAliasLong,
	MSG_ABMailLong,
	MSG_ABNoAt,
	MSG_ABMailSpaces,
	MSG_AbMailUnprintable,
	MSG_ABUnterminated,
	MSG_NotUsed351,
	MSG_NotUsed352,
	MSG_NotUsed353,
	MSG_NotUsed354,
	MSG_NotUsed355,
	MSG_SectionIgnored,
	MSG_FileXEmpty,
	MSG_SubjectStart,
	MSG_NotUsed359,
	MSG_SubjectLong,
	MSG_NotUsed361,
	MSG_SigRegular,
	MSG_SigAccess,
	MSG_MailBinary,
	MSG_AttAlternate,
	MSG_RecipMany,
	MSG_ABMissing,
	MSG_ABNoAlias2,
	MSG_RecipNone,
	MSG_AttSessionEmpty,
	MSG_AttAccess,
	MSG_AttRegular,
	MSG_AttEmpty2,
	MSG_NotUsed374,
	MSG_NotUsed375,
	MSG_MailReject,
	MSG_NotUsed377,
	MSG_NotUsed378,
	MSG_MailAccountsNone,
	MSG_MailAccountBad,
	MSG_MailBrowse,
	MSG_MailDB,
	MSG_MailDir,
	MSG_MailBinary2,
	MSG_MailEmpty,
	MSG_RecipNone2,
	MSG_MailFirstCC,
	MSG_AttLineX,
	MSG_MailAccountBadLineX,
	MSG_NotUsed390,
	MSG_MailFirstLine,
	MSG_NotUsed392,
	MSG_RecipNone3,
	MSG_ProtExpected,
	MSG_BadProt,
	MSG_BadPort,
	MSG_DomainLong,
	MSG_UserNameLong2,
	MSG_PasswordLong2,
	MSG_NotUsed400,
	MSG_NotUsed401,
	MSG_NoFunction,
	MSG_BadFunctionName,
	MSG_NoSuchFunction,
	MSG_ManyArgs,
	MSG_NoArgument,
	MSG_NoSpawn,
	MSG_TempNoCreate2,
	MSG_ManyTables,
	MSG_RegularFile,
	MSG_NotUsed411,
	MSG_NoRead2,
	MSG_NoAccess,
	MSG_NoEnvVar,
	MSG_EarlyExpand,
	MSG_NoAccessDir,
	MSG_ShellPatternLong,
	MSG_ExpandBackslash,
	MSG_ShellSyntax,
	MSG_ShellCompile,
	MSG_ShellExpand,
	MSG_ShellNoMatch,
	MSG_ShellManyMatch,
	MSG_ShellLineLong,
	MSG_DBUnspecified,
	MSG_DBConnect,
	MSG_DBUnexpected,
	MSG_DBNoKey,
	MSG_DBColumnLong,
	MSG_DBSyntax,
	MSG_DBColRange,
	MSG_DBManyColumns,
	MSG_DBNoColumn,
	MSG_DBNoTable,
	MSG_DBBadColumn,
	MSG_DBManyBlobs,
	MSG_DBPipes,
	MSG_DBNewline,
	MSG_DBAddField,
	MSG_DBLostField,
	MSG_DBNoKeyCol,
	MSG_DBMisc,
	MSG_DBMassDelete,
	MSG_DBChangeKey,
	MSG_DBChangeBlob,
	MSG_DBChangeText,
	MSG_DBDeleteCount,
	MSG_DBInsertCount,
	MSG_DBUpdateCount,
	MSG_DBRefInt,
	MSG_DBLocked,
	MSG_DBPerms,
	MSG_DBDeadlock,
	MSG_DBNotNull,
	MSG_DBCheck,
	MSG_DBTimeout,
	MSG_DBView,
	MSG_CloseTag,
	MSG_JSKeystroke,
	MSG_JSFocus,
	MSG_StrayOnchange,
	MSG_NotInForm2,
	MSG_FieldNoName,
	MSG_GetPost,
	MSG_Enctype,
	MSG_FormProtBad,
	MSG_InputType,
	MSG_RadioMany,
	MSG_TagNest,
	MSG_TagInTag,
	MSG_TagClose,
	MSG_TextareaNest,
	MSG_InAnchor,
	MSG_HasTags,
	MSG_OptionComma,
	MSG_OptionEmpty,
	MSG_ManyTitles,
	MSG_NotInList,
	MSG_NotInTable,
	MSG_NotInRow,
	MSG_NotInSelect,
	MSG_ManyOptSelected,
	MSG_BadTag,
	MSG_TagNotClosed,
	MSG_JSBlankWindow,
	MSG_AttAfterChars,
	MSG_AttBad64,
	MSG_OnchangeText,
	MSG_Doubleclick,
	MSG_OptionSync,
	MSG_UnloadClick,
	MSG_ScriptNotClosed,
	MSG_GetLocalJS,
	MSG_GetJS,
	MSG_GetJS2,
	MSG_NJNoOnclick,
	MSG_NJNoOnchange,
	MSG_NJNoReset,
	MSG_NJNoSubmit,
	MSG_LostTag,
	MSG_JSTextarea,
	MSG_GarbledRefresh,
	MSG_NotUsed503,
	MSG_RedirectNoURL,
	MSG_HTTPError,
	MSG_NotUsed506,
	MSG_ConfigUpdate,
	MSG_HelpOn,
	MSG_FTPDownload,
	MSG_NoCertFile,
	MSG_ERBC_NoWrite,
	MSG_ERBC_Nulls,
	MSG_ERBC_NoFnName,
	MSG_ERBC_FnDigit,
	MSG_ERBC_FnTooLong,
	MSG_ERBC_SyntaxErr,
	MSG_ERBC_NoCondFile,
	MSG_ERBC_NoMatchStr,
	MSG_ERBC_MatchNowh,
	MSG_ERBC_Filters,
	MSG_ERBC_BadKeyword,
	MSG_ERBC_MailAttrOut,
	MSG_ERBC_MimeAttrOut,
	MSG_ERBC_TableAttrOut,
	MSG_ERBC_MailAttrIn,
	MSG_ERBC_MimeAttrIn,
	MSG_ERBC_TableAttrIn,
	MSG_ERBC_NoAttr,
	MSG_ERBC_ManyCols,
	MSG_ERBC_KeyNotNb,
	MSG_ERBC_KeyOutRange,
	MSG_ERBC_AbNotFile,
	MSG_NotUsed533,
	MSG_ERBC_NotDir,
	MSG_ERBC_ManyAgents,
	MSG_ERBC_JarNotFile,
	MSG_ERBC_JarNoWrite,
	MSG_ERBC_NoJS,
	MSG_ERBC_DomainDot,
	MSG_ERBC_TrashNotFile,
	MSG_ERBC_SSLNoFile,
	MSG_ERBC_SSLNoRead,
	MSG_ERBC_KeywordNYI,
	MSG_ERBC_SevDefaults,
	MSG_ERBC_NoInserver,
	MSG_ERBC_NoOutserver,
	MSG_ERBC_NoLogin,
	MSG_ERBC_NPasswd,
	MSG_ERBC_NoFrom,
	MSG_ERBC_NoReply,
	MSG_ERBC_NoType,
	MSG_ERBC_NDesc,
	MSG_ERBC_NoSuffix,
	MSG_ERBC_NoProgram,
	MSG_ERBC_NoTblName,
	MSG_ERBC_NoShortName,
	MSG_ERBC_NColumns,
	MSG_ERBC_UnexpBrace,
	MSG_ERBC_UnexElse,
	MSG_ERBC_GarblText,
	MSG_ERBC_FnNotStart,
	MSG_ERBC_StatNotInFn,
	MSG_ERBC_ManyAcc,
	MSG_ERBC_ManyTypes,
	MSG_ERBC_ManyTables,
	MSG_ERBC_ManyFn,
	MSG_ERBC_TooDeeply,
	MSG_ERBC_FnNotClosed,
	MSG_ERBC_MNotClosed,
	MSG_NotHome,
	MSG_NotDir,
	MSG_NoMailAcc,
	MSG_BadAccNb,
	MSG_Usage,
	MSG_MinOneRec,
	MSG_MinOneRecBefAtt,
	MSG_ManyOpen,
	MSG_InvalidSession,
	MSG_InvalidLineNb,
	MSG_ERBC_NoPROXY,
	MSG_SessionOutRange,
	MSG_DoubleInit,
	MSG_QuitNoActive,
	MSG_EmptyPiece,
	MSG_NoNlOnDir,
	MSG_NoClosingLine,
	MSG_NoTagFound,
	MSG_NoRebCookie,
	MSG_NotUsed589,
	MSG_FetchNotBackgnd,
	MSG_NoMailDir,
	MSG_NoDirChange,
	MSG_NotUsed593,
	MSG_LogPass,
	MSG_NotUsed595,
	MSG_NotUsed596,
	MSG_NotUsed597,
	MSG_NotUsed598,
	MSG_NotUsed599,
	MSG_BadTagCode,
	MSG_NotUsed601,
	MSG_HtmlNotreentrant,
	MSG_UnexSubmitForm,
	MSG_NullListInform,
	MSG_NotUsed605,
	MSG_JavaMemError,
	MSG_JavaContextError,
	MSG_JavaWindowError,
	MSG_JavaClassError,
	MSG_JavaObjError,
	MSG_PortTooLong,
	MSG_ProtTooLong,
	MSG_MemAllocError,
	MSG_MemCallocError,
	MSG_ReallocP,
	MSG_Realloc0,
	MSG_ErrorRealloc,
	MSG_NullStrList,
	MSG_NullStrListCI,
	MSG_NullCharInList,
	MSG_NullPtr,
	MSG_IoctlError,
	MSG_OpenFail,
	MSG_CreateFail,
	MSG_InvalidFopen,
	MSG_BadDirSlash,
	MSG_BadSlash,
	MSG_DecodePost,
	MSG_NoPDF,
	MSG_NotUsed630,
	MSG_NotUsed631,
	MSG_ReDir,
	MSG_ReDB,
	MSG_ReEmpty,
	MSG_ReBinary,
	MSG_ReSubjectReply,
	MSG_ReNoID,
	MSG_ReNoInfo,
	MSG_ListControl,
	MSG_ListNA,
	MSG_PcreUtf8,
	MSG_Conv8859,
	MSG_ConvUtf8,
	MSG_IUConvertOff,
	MSG_IUConvertOn,
	MSG_CopyMoveDir,
	MSG_NoDirDelete,
	MSG_LibcurlNoInit,
	MSG_FTPEmptyDir,
	MSG_ReAscii,
	MSG_ReUtf8,
	MSG_BadUtf8String,
	MSG_DBManyKeyCol,
	MSG_DBNextSerial,
	MSG_ShowTables,
	MSG_DBNoSource,
	MSG_DBConnecting,
	MSG_Row,
	MSG_Rows,
	MSG_Selected,
	MSG_Inserted,
	MSG_Updated,
	MSG_Deleted,
	MSG_ProcExec,
	MSG_Table,
	MSG_UnterminatedSelect,
	MSG_DBNoWhere,
	MSG_RemoteAccessDenied,
	MSG_AuthRequired,
	MSG_NoMem,
	MSG_CurlVersion,
	MSG_Timeout,
	MSG_CurlSendData,
	MSG_CurlCatchAll,
	MSG_Fkeys,
	MSG_FetchBlobOff,
	MSG_FetchBlobOn,
	MSG_SSLConnectError,
	MSG_InputTTY,
	MSG_InputReadLine,
	MSG_NotUsed681,
	MSG_JSSessionFail,
	MSG_StrayOnclick,
};
