//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView;

@interface IESLiveApplyDetailFastMatchBottomCenterEntryView : UIView <IESLiveApplyDetailFastMatchEntryView> {
    id /* block */ _action;
    UILabel *_defaultLabel;
    UIView *_defaultIndicator;
    UILabel *_matchingLabel;
}

@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UILabel *defaultLabel;
@property (retain, nonatomic) UIView *defaultIndicator;
@property (retain, nonatomic) UILabel *matchingLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_tap;
- (id)defaultIndicator;
- (void)setDefaultIndicator:(id)arg0;
- (void)setMatchingLabel:(id)arg0;
- (id)matchingLabel;
- (void)markMatching:(BOOL)arg0;
- (void)markEmphasized:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setAction:(id /* block */)arg0;
- (id /* block */)action;
- (id)initWithAction:(id /* block */)arg0;
- (id)defaultLabel;
- (void)setDefaultLabel:(id)arg0;

@end