//
//     Generated by private class-dump
//

@class IESLiveRecordURLCopyView, NSString;

@interface IESLiveRecordURLCopyFragment : IESLiveRoomComponent <HTSLiveRecordURLCopyRouter, IESLiveRecordURLCopyRouter> {
    BOOL _panelShowing;
    IESLiveRecordURLCopyView *_douyinAndHotsoonRecordURLCopyView;
}

@property (weak, nonatomic) IESLiveRecordURLCopyView *douyinAndHotsoonRecordURLCopyView;
@property (nonatomic) BOOL panelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)panelShowing;
- (void)setPanelShowing:(BOOL)arg0;
- (void)componentMount;
- (void)openRecordURLCopyPanel;
- (void)showCopyPanelAuto;
- (id)douyinAndHotsoonRecordURLCopyView;
- (void)setDouyinAndHotsoonRecordURLCopyView:(id)arg0;
- (void).cxx_destruct;

@end
