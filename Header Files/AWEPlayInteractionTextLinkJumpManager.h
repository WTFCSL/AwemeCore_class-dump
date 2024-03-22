//
//     Generated by private class-dump
//

@class NSString, AWEPlayInteractionContext, AWEAwemeModel;

@interface AWEPlayInteractionTextLinkJumpManager : NSObject {
    AWEAwemeModel *_model;
    NSString *_referString;
    AWEPlayInteractionContext *_context;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEPlayInteractionContext *context;

+ (void)openMpUrl:(id)arg0 referString:(id)arg1;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)jumpAction;
- (void)configureWithModel:(id)arg0 context:(id)arg1;
- (void)openMpUrl;
- (void)openXiguaAppIsDialogConfirm:(BOOL)arg0;
- (void)noticeTappedDirectOpenAppWithDialogDefaultChecked:(BOOL)arg0;
- (id)durationAndPercentParams;
- (void)oldJumpAction;
- (id)copyCommonReportParams;
- (id)directBarType;
- (void)showSheetWithViewController:(id)arg0 sheetHeight:(double)arg1 commonReportParams:(id)arg2;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)context;

@end
