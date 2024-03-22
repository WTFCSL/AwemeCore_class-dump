//
//     Generated by private class-dump
//

@class NSString, NSArray, IESECLiveListBottomJumpInfo, IESECLiveTrackConfigModel, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveCombinationBlockElementModel : MTLModel <MTLJSONSerializing> {
    IESECLiveImageURLModel *_backgroundImage;
    NSString *_backgroundColor;
    NSNumber *_cornerRadius;
    NSArray *_content;
    NSNumber *_elementHeight;
    IESECLiveListBottomJumpInfo *_jumpInfo;
    IESECLiveTrackConfigModel *_showTrackInfo;
    IESECLiveTrackConfigModel *_clickTrackInfo;
    NSString *_btmInfo;
}

@property (retain, nonatomic) IESECLiveImageURLModel *backgroundImage;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSNumber *cornerRadius;
@property (retain, nonatomic) NSArray *content;
@property (retain, nonatomic) NSNumber *elementHeight;
@property (retain, nonatomic) IESECLiveListBottomJumpInfo *jumpInfo;
@property (retain, nonatomic) IESECLiveTrackConfigModel *showTrackInfo;
@property (retain, nonatomic) IESECLiveTrackConfigModel *clickTrackInfo;
@property (retain, nonatomic) NSString *btmInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setBtmInfo:(id)arg0;
- (id)btmInfo;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg0;
- (void)setElementHeight:(id)arg0;
- (id)showTrackInfo;
- (void)setShowTrackInfo:(id)arg0;
- (id)clickTrackInfo;
- (void)setClickTrackInfo:(id)arg0;
- (id)backgroundImage;
- (void).cxx_destruct;
- (id)cornerRadius;
- (id)content;
- (void)setContent:(id)arg0;
- (id)backgroundColor;
- (void)setCornerRadius:(id)arg0;
- (void)setBackgroundImage:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (id)elementHeight;

@end