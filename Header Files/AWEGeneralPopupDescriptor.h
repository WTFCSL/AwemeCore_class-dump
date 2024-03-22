//
//     Generated by private class-dump
//

@class AWEGeneralPopupRecord, AWEGeneralPopupPresenter, AWEGeneralPopupModel;

@interface AWEGeneralPopupDescriptor : NSObject {
    AWEGeneralPopupModel *_model;
    AWEGeneralPopupRecord *_record;
    AWEGeneralPopupPresenter *_presenter;
}

@property (retain, nonatomic) AWEGeneralPopupModel *model;
@property (retain, nonatomic) AWEGeneralPopupRecord *record;
@property (retain, nonatomic) AWEGeneralPopupPresenter *presenter;

- (BOOL)showPopupIfCanAtTiming:(long long)arg0 onClose:(id /* block */)arg1;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)presenter;
- (id)model;
- (id)dictionaryRepresentation;
- (id)record;
- (void)setPresenter:(id)arg0;
- (void)setRecord:(id)arg0;

@end