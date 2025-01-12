//
//     Generated by private class-dump
//

@class NSString, IESLivePublicScreenAudienceSettingManager;

@interface IESLivePublicScreenAudienceSettingAttachment : NSObject <IESLivePublicScreenAudienceSettingFunctionProtocol> {
    IESLivePublicScreenAudienceSettingManager *_audienceSettingManager;
}

@property (retain, nonatomic) IESLivePublicScreenAudienceSettingManager *audienceSettingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFontSizeType:(unsigned long long)arg0;
- (void)setupWithRoom:(id)arg0 trackContext:(id)arg1;
- (unsigned long long)currentFontSizeType;
- (void)publicScreenWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)publicScreenWillBeginDragging:(id)arg0;
- (void)publicScreenTapped;
- (void)publicScreenLongPressed;
- (void)publicScreenCollectionView:(id)arg0 heightWillChangeWithLayoutData:(id)arg1;
- (void)publicScreenCollectionView:(id)arg0 heightDidChangeWithLayoutData:(id)arg1;
- (void)setAudienceSettingManager:(id)arg0;
- (id)audienceSettingManager;
- (void).cxx_destruct;

@end
