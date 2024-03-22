//
//     Generated by private class-dump
//

@class NSString, IESECLiveListBottomGuideModel;

@interface IESECLiveListBottomModel : MTLModel <MTLJSONSerializing> {
    NSString *_bottomTitle;
    NSString *_bottomEndTitle;
    IESECLiveListBottomGuideModel *_bottomGuideInfo;
}

@property (copy, nonatomic) NSString *bottomTitle;
@property (retain, nonatomic) NSString *bottomEndTitle;
@property (retain, nonatomic) IESECLiveListBottomGuideModel *bottomGuideInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)bottomGuideInfo;
- (void)setBottomGuideInfo:(id)arg0;
- (id)bottomEndTitle;
- (void)setBottomEndTitle:(id)arg0;
- (void).cxx_destruct;
- (id)bottomTitle;
- (void)setBottomTitle:(id)arg0;

@end