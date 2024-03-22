//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWEURLModel;

@interface AWEProfileCommerceTaskModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_taskID;
    NSString *_name;
    NSString *_desc;
    AWEURLModel *_headImageUrl;
    NSString *_openUrl;
}

@property (retain, nonatomic) NSNumber *taskID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) AWEURLModel *headImageUrl;
@property (copy, nonatomic) NSString *openUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headImageUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setOpenUrl:(id)arg0;
- (id)openUrl;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg0;
- (id)desc;
- (void).cxx_destruct;
- (id)taskID;
- (void)setName:(id)arg0;
- (void)setTaskID:(id)arg0;
- (void)setDesc:(id)arg0;
- (id)name;

@end