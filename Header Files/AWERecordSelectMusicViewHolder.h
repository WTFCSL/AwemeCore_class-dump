//
//     Generated by private class-dump
//

@class AWERecordSelectMusicComponent, FPStateFlow, UIView;
@protocol ACCScrollStringButtonProtocol, FPUIComponent;

@interface AWERecordSelectMusicViewHolder : NSObject <FPUIHolder> {
    id<FPUIComponent> _typeErasedComponent;
    UIView<ACCScrollStringButtonProtocol> *_selectMusicButton;
    FPStateFlow *_stateFlow;
    AWERecordSelectMusicComponent *_component;
}

@property (class, readonly, nonatomic) Class componentType;

@property (retain, nonatomic) AWERecordSelectMusicComponent *component;
@property (retain, nonatomic) UIView<ACCScrollStringButtonProtocol> *selectMusicButton;
@property (retain, nonatomic) FPStateFlow *stateFlow;
@property (retain, nonatomic) id<FPUIComponent> typeErasedComponent;

+ (Class)componentType;

- (id)typeErasedComponent;
- (void)setTypeErasedComponent:(id)arg0;
- (id)selectMusicButton;
- (void)setSelectMusicButton:(id)arg0;
- (id)stateFlow;
- (void)didClickSelectMusicButton;
- (void)didClickCloseButtonOnMusicButton;
- (void)setStateFlow:(id)arg0;
- (void)addStateFlowStateChanged;
- (void)refreshInitialMusicCover;
- (void).cxx_destruct;
- (id)component;
- (id)initWith:(id)arg0;
- (void)setComponent:(id)arg0;

@end
