//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEPlayInteractionContext, AWEAwemeModel, NSString, NSMutableArray;
@protocol AWEPzEngineProtocol;

@interface AWEPlayInteractionComponentGlobalPriorityManager : NSObject <AWEPlayInteractionComponentGlobalPriorityManagerProtocol> {
    AWEAwemeModel *_model;
    AWEPlayInteractionContext *_context;
    NSMutableArray *_activatedComponents;
    NSMutableDictionary *_componentDict;
    id<AWEPzEngineProtocol> _feedEngine;
}

@property (retain, nonatomic) NSMutableArray *activatedComponents;
@property (retain, nonatomic) NSMutableDictionary *componentDict;
@property (retain, nonatomic) id<AWEPzEngineProtocol> feedEngine;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentDict;
- (void)setComponentDict:(id)arg0;
- (BOOL)activateComponentWithID:(id)arg0 componentType:(id)arg1 component:(id)arg2;
- (id)activatedComponents;
- (BOOL)verifyActivatedComponent;
- (void)filterAvoidedComponent;
- (id)feedEngine;
- (BOOL)containsComponentWithID:(id)arg0 componentType:(id)arg1 component:(id)arg2;
- (BOOL)registerComponentWithID:(id)arg0 componentType:(id)arg1 component:(id)arg2;
- (void)setActivatedComponents:(id)arg0;
- (void)setFeedEngine:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (id)context;
- (void)reset;

@end