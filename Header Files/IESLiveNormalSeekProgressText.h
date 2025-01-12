//
//     Generated by private class-dump
//

@class UILabel, NSString;

@interface IESLiveNormalSeekProgressText : UIView <IESLiveSeekProgressTextProtocal> {
    UILabel *_currentLabel;
    long long _labelStyle;
}

@property (retain, nonatomic) UILabel *currentLabel;
@property (nonatomic) long long labelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)boldFontDescriptor;
- (void)updateWithOrientation:(BOOL)arg0;
- (double)getBottomGap:(id)arg0;
- (void)updateWithProgress:(id)arg0 duration:(id)arg1 needShadow:(BOOL)arg2;
- (void)updateWithProgress:(id)arg0 duration:(id)arg1;
- (id)mediumFontDescriptor;
- (long long)labelStyle;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (void)setLabelStyle:(long long)arg0;
- (id)currentLabel;
- (void)setCurrentLabel:(id)arg0;

@end
