//
//     Generated by private class-dump
//

@class DUXInfoPanel, NSString, DUXContentSheet;

@interface AWEPlayAiToTextComplianceNoticeView : UIView <DUXSheetDelegate> {
    DUXContentSheet *_sheet;
    DUXInfoPanel *_infoPanel;
}

@property (retain, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) DUXInfoPanel *infoPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowComplianceNoticeWithModel:(id)arg0;
+ (BOOL)shouleShowComplianceNoticeEntranceWithModel:(id)arg0;

- (void)setInfoPanel:(id)arg0;
- (void)dismissComplianceNoticeView;
- (void)showComplianceNoticeView;
- (id)infoPanel;
- (void).cxx_destruct;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end
