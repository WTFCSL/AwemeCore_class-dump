//
//     Generated by private class-dump
//

@class NSString;

@interface IESECMallInnerFeedProductRecReasonInfoModel : MTLModel <MTLJSONSerializing> {
    long long _type;
    NSString *_typeName;
    NSString *_content;
    NSString *_tagTrackParam;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *typeName;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *tagTrackParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)tagTrackParam;
- (void)setTagTrackParam:(id)arg0;
- (void).cxx_destruct;
- (void)setTypeName:(id)arg0;
- (long long)type;
- (id)content;
- (void)setType:(long long)arg0;
- (void)setContent:(id)arg0;
- (id)typeName;

@end
