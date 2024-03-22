//
//     Generated by private class-dump
//

@class NSString;
@protocol CKSCameraServiceBaseProtocol;

@interface ACCCameraServiceWrapper : NSProxy <CKSCameraServiceBaseProtocol> {
    BOOL _isActive;
    id<CKSCameraServiceBaseProtocol> _aCameraService;
}

@property (retain, nonatomic) id<CKSCameraServiceBaseProtocol> aCameraService;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateWith:(id)arg0;
- (id)aCameraService;
- (void)setACameraService:(id)arg0;
- (id)initWithTarget:(id)arg0;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)forwardInvocation:(id)arg0;
- (void)deactivate;
- (id)methodSignatureForSelector:(SEL)arg0;
- (BOOL)isActive;
- (id)wrappedObject;

@end