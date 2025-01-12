//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface BDUGLuckyDogDialogAdapter : NSObject <BDUGLuckyDogDialogProtocol> {
    NSMutableArray *_dialogObjMap;
}

@property (retain, nonatomic) NSMutableArray *dialogObjMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)enqueuePopUp:(id)arg0 params:(id)arg1 withShowBlock:(id /* block */)arg2;
- (void)finishPopUp:(id)arg0;
- (id)dialogObjMap;
- (id)containerIDFromDialogObject:(id)arg0;
- (id)removeDialogFromMapWithKey:(void *)arg0;
- (void)setDialogObjMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)containerID;

@end
