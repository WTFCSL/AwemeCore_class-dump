//
//     Generated by private class-dump
//

@class UILabel;

@interface AFDPinchZoomInTipsView : UIView {
    unsigned long long _status;
    UILabel *_tipsLabel;
}

@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) unsigned long long status;

+ (id)enterTips;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (id)initAndAddToContainer:(id)arg0;
- (void)showTipsForStatus:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg0;
- (void)setupUI;

@end
