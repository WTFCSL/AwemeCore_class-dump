//
//     Generated by private class-dump
//

@class NSMapTable, IESAppContext;
@protocol IESGCPDIContext;

@interface IESGCPDIContainer : NSObject {
    unsigned long long _type;
    id<IESGCPDIContext> _retainedContext;
    IESGCPDIContainer *_parentDI;
    IESAppContext *_realDI;
    NSMapTable *_multicasterMap;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<IESGCPDIContext> retainedContext;
@property (weak, nonatomic) IESGCPDIContainer *parentDI;
@property (retain, nonatomic) IESAppContext *realDI;
@property (retain, nonatomic) NSMapTable *multicasterMap;

- (id)objectWithProtocol:(id)arg0;
- (id)retainedContext;
- (id)realDI;
- (id)multicasterMap;
- (BOOL)bindObject:(id)arg0 forProtocol:(id)arg1;
- (id)parentDI;
- (id)initWithType:(unsigned long long)arg0 context:(id)arg1 realDI:(id)arg2 parentDI:(id)arg3;
- (BOOL)multiBindObject:(id)arg0 forProtocol:(id)arg1;
- (BOOL)unbindObject:(id)arg0 forProtocol:(id)arg1;
- (void)setRetainedContext:(id)arg0;
- (void)setParentDI:(id)arg0;
- (void)setRealDI:(id)arg0;
- (void)setMulticasterMap:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;

@end
