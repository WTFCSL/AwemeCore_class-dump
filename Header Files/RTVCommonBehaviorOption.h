//
//     Generated by private class-dump
//

@class NSString;

@interface RTVCommonBehaviorOption : JSONModel <RTVBehaviorOptionProtocol> {
    NSString *_enterFrom;
    NSString *_eventPage;
    NSString *_eventParam;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *eventPage;
@property (copy, nonatomic) NSString *eventParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;
+ (id)modelToJSONDictionary;
+ (id)keyMapperKeys;
+ (id)key;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)eventPage;
- (void)setEventPage:(id)arg0;
- (id)eventParam;
- (void)setEventParam:(id)arg0;
- (void).cxx_destruct;

@end
