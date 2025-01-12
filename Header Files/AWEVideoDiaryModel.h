//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWEURLModel;

@interface AWEVideoDiaryModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_ID;
    AWEURLModel *_icon;
    NSString *_name;
    NSString *_desc;
}

@property (retain, nonatomic) NSNumber *ID;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)desc;
- (id)icon;
- (id)ID;
- (void)setID:(id)arg0;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (void)setIcon:(id)arg0;
- (void)setDesc:(id)arg0;
- (id)name;

@end
