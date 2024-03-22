//
//     Generated by private class-dump
//

@class NSArray, NSNumber, NSString;

@interface AWEAdConvertCommentDetailModel : MTLModel <MTLJSONSerializing> {
    NSArray *_commentTags;
    NSNumber *_commentCount;
    NSNumber *_positiveRate;
    NSString *_iconUrl;
    NSString *_desc;
}

@property (copy, nonatomic) NSArray *commentTags;
@property (retain, nonatomic) NSNumber *commentCount;
@property (retain, nonatomic) NSNumber *positiveRate;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)commentTags;
- (id)positiveRate;
- (void)setCommentTags:(id)arg0;
- (void)setPositiveRate:(id)arg0;
- (id)desc;
- (void).cxx_destruct;
- (void)setDesc:(id)arg0;
- (id)commentCount;
- (void)setCommentCount:(id)arg0;

@end
