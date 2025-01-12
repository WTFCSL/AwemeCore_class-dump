//
//     Generated by private class-dump
//

@class UIAlertController, FPStateFlow, NSObject, ACCAnimatedButton;
@protocol FPUIComponent, ACCMultiStyleAlertProtocol;

@interface AWERecordCloseViewHolder : NSObject <FPUIHolder> {
    id<FPUIComponent> _typeErasedComponent;
    ACCAnimatedButton *_closeButton;
    NSObject<ACCMultiStyleAlertProtocol> *_backAlert;
    UIAlertController *_alertController;
    FPStateFlow *_stateFlow;
    id /* block */ _backAlertConfig;
}

@property (class, readonly, nonatomic) Class componentType;

@property (retain, nonatomic) FPStateFlow *stateFlow;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (copy, nonatomic) id /* block */ backAlertConfig;
@property (retain, nonatomic) NSObject<ACCMultiStyleAlertProtocol> *backAlert;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) id<FPUIComponent> typeErasedComponent;

+ (Class)componentType;

- (id)typeErasedComponent;
- (void)setTypeErasedComponent:(id)arg0;
- (void)onCloseButtonTap;
- (id)backAlert;
- (void)setBackAlert:(id)arg0;
- (id)stateFlow;
- (void)setBackAlertConfig:(id /* block */)arg0;
- (id /* block */)backAlertConfig;
- (void)setStateFlow:(id)arg0;
- (id)closeComponent;
- (void)updateCloseButtonStyle:(unsigned long long)arg0 closeButton:(id)arg1;
- (void)configAlertUIWithStyle:(unsigned long long)arg0;
- (id /* block */)alertConfigWithoutAction;
- (id /* block */)exitActionConfig;
- (id /* block */)reShootActionConfig;
- (id /* block */)saveDraftActionConfig;
- (id /* block */)cancelActionConfig;
- (void)addStateFlowStateChanged;
- (void).cxx_destruct;
- (id)initWith:(id)arg0;
- (id)alertController;
- (void)setAlertController:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
