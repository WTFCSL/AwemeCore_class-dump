//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHotCommentModel : MTLModel <MTLJSONSerializing> {
    NSString *_cid;
    NSString *_text;
    long long _diggCount;
}

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long diggCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)diggCount;
- (void)setDiggCount:(long long)arg0;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)cid;
- (id)text;
- (void)setCid:(id)arg0;

@end
