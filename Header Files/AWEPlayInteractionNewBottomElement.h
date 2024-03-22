//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEPlayInteractionNewBottomElement : AWEPlayInteractionBaseElement <AWEPlayInteractionComponentGlobalPriorityComponentProtocol, AWEPlayInteractionElementConfigProtocol> {
    BOOL _hasMutex;
    NSNumber *_priority;
}

@property (retain, nonatomic) NSNumber *priority;
@property (nonatomic) BOOL hasMutex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithParamDict:(id)arg0;
- (unsigned long long)elementVisibleType;
- (BOOL)shouldAppearWithData:(id)arg0;
- (id)bottomElementContainer;
- (void)setHasMutex:(BOOL)arg0;
- (BOOL)hasMutex;
- (void).cxx_destruct;
- (void)setPriority:(id)arg0;
- (id)identifier;
- (void)reset;
- (id)priority;
- (unsigned long long)elementPosition;

@end