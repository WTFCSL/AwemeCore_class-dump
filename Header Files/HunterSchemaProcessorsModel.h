//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface HunterSchemaProcessorsModel : MTLModel <MTLJSONSerializing> {
    BOOL _enable;
    long long _timeout;
    NSArray *_taskList;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) long long timeout;
@property (retain, nonatomic) NSArray *taskList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)appendTaskList:(id)arg0;
- (BOOL)enable;
- (void).cxx_destruct;
- (long long)timeout;
- (void)setEnable:(BOOL)arg0;
- (void)setTimeout:(long long)arg0;
- (id)taskList;
- (void)setTaskList:(id)arg0;

@end
