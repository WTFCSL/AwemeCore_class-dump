//
//     Generated by private class-dump
//

@class NSString, IESECHeadVideoExtraInfoHeadVideoModel;

@interface IESECHeadVideoExtraInfoModel : MTLModel <MTLJSONSerializing> {
    IESECHeadVideoExtraInfoHeadVideoModel *_headVideo;
}

@property (retain, nonatomic) IESECHeadVideoExtraInfoHeadVideoModel *headVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)headVideo;
- (void)setHeadVideo:(id)arg0;
- (void).cxx_destruct;

@end
