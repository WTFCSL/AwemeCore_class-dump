//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIImage, AWECampaignImageModel;

@interface AWECampaignProfileActivityModel : MTLModel <MTLJSONSerializing> {
    BOOL _isReady;
    AWECampaignImageModel *_image;
    NSString *_bubbleText;
    NSString *_webURL;
    long long _timeLimit;
    long long _showScenery;
    UIImage *_profileActicityImage;
}

@property (retain, nonatomic) AWECampaignImageModel *image;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) long long timeLimit;
@property (nonatomic) long long showScenery;
@property (retain, nonatomic) UIImage *profileActicityImage;
@property (nonatomic) BOOL isReady;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)showScenery;
- (void)setShowScenery:(long long)arg0;
- (id)profileActicityImage;
- (void)setProfileActicityImage:(id)arg0;
- (void).cxx_destruct;
- (void)setTimeLimit:(long long)arg0;
- (id)image;
- (BOOL)isReady;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (long long)timeLimit;
- (void)setImage:(id)arg0;
- (BOOL)isEmpty;
- (void)setIsReady:(BOOL)arg0;
- (id)bubbleText;
- (void)setBubbleText:(id)arg0;

@end