//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECEntranceModifyResultItem : MTLModel <MTLJSONSerializing> {
    NSString *_page;
    NSString *_scene;
    unsigned long long _actionType;
    NSArray *_keys;
}

@property (copy, nonatomic) NSString *page;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSArray *keys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initRemoveItemWithScene:(id)arg0 keys:(id)arg1;
- (id)initPutItemWithScene:(id)arg0 keys:(id)arg1;
- (void)setActionType:(unsigned long long)arg0;
- (id)keys;
- (void)setKeys:(id)arg0;
- (void)setScene:(id)arg0;
- (unsigned long long)actionType;
- (id)page;
- (void).cxx_destruct;
- (void)setPage:(id)arg0;
- (id)scene;

@end
