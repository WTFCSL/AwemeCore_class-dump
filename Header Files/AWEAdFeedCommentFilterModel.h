//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEAdFeedCommentFilterModel : MTLModel <MTLJSONSerializing> {
    BOOL _selected;
    NSString *_name;
    NSString *_tagId;
    NSNumber *_count;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *tagId;
@property (retain, nonatomic) NSNumber *count;
@property (nonatomic) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (BOOL)selected;
- (void)setCount:(id)arg0;
- (void).cxx_destruct;
- (id)count;
- (void)setSelected:(BOOL)arg0;
- (void)setName:(id)arg0;
- (void)setTagId:(id)arg0;
- (id)tagId;
- (id)name;

@end
