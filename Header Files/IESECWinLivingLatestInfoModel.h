//
//     Generated by private class-dump
//

@class NSString;

@interface IESECWinLivingLatestInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_titleText;
    NSString *_webcastInfo;
    NSString *_audienceInfo;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *webcastInfo;
@property (copy, nonatomic) NSString *audienceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)webcastInfo;
- (void)setWebcastInfo:(id)arg0;
- (id)audienceInfo;
- (void)setAudienceInfo:(id)arg0;
- (void)setTitleText:(id)arg0;
- (void).cxx_destruct;
- (id)titleText;

@end
