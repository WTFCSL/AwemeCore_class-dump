//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, NSNumber;

@interface IESECRecommendReasonModel : MTLModel <MTLJSONSerializing> {
    long long _type;
    NSString *_typeName;
    NSString *_content;
    IESECURLModel *_cover;
    NSString *_rankID;
    NSString *_uid;
    NSNumber *_rankNo;
    NSString *_link;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *typeName;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) IESECURLModel *cover;
@property (retain, nonatomic) NSString *rankID;
@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSNumber *rankNo;
@property (retain, nonatomic) NSString *link;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (id)rankID;
- (void)setRankID:(id)arg0;
- (id)rankNo;
- (void)setRankNo:(id)arg0;
- (void)setUid:(id)arg0;
- (id)uid;
- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (void)setTypeName:(id)arg0;
- (long long)type;
- (id)content;
- (void)setType:(long long)arg0;
- (void)setContent:(id)arg0;
- (id)typeName;
- (id)link;

@end
