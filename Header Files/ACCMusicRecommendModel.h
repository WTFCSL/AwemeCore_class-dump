//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface ACCMusicRecommendModel : MTLModel <MTLJSONSerializing> {
    NSString *_musicId;
    NSNumber *_reasonType;
    NSString *_text;
}

@property (copy, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSNumber *reasonType;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setMusicId:(id)arg0;
- (id)musicId;
- (id)reasonTypeString;
- (id)reasonType;
- (void)setReasonType:(id)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;

@end