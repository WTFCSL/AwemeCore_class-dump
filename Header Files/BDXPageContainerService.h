//
//     Generated by private class-dump
//

@class NSString;
@protocol BDXDisableSwipeServiceProtocol;

@interface BDXPageContainerService : NSObject <BDXPageContainerServiceProtocol> {
    id<BDXDisableSwipeServiceProtocol> _disableSwipeDelegate;
}

@property (retain, nonatomic) id<BDXDisableSwipeServiceProtocol> disableSwipeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (id)create:(id)arg0 context:(id)arg1;
- (id)open:(id)arg0 context:(id)arg1;
- (id)disableSwipeDelegate;
- (void)setDisableSwipeDelegate:(id)arg0;
- (void).cxx_destruct;

@end
