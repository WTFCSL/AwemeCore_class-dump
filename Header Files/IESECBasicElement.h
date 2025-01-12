//
//     Generated by private class-dump
//

@class NSArray, IESECActionDefine, NSString;

@interface IESECBasicElement : MTLModel <MTLJSONSerializing> {
    NSArray *_showEventList;
    IESECActionDefine *_action;
    NSString *_statusID;
    NSString *_currentState;
}

@property (copy, nonatomic) NSArray *showEventList;
@property (retain, nonatomic) IESECActionDefine *action;
@property (copy, nonatomic) NSString *statusID;
@property (copy, nonatomic) NSString *currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showEventListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setStatusID:(id)arg0;
- (id)showEventList;
- (void)setShowEventList:(id)arg0;
- (void)setCurrentState:(id)arg0;
- (void).cxx_destruct;
- (id)currentState;
- (void)setAction:(id)arg0;
- (id)action;
- (id)statusID;

@end
