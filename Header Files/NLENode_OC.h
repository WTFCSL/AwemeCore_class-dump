//
//     Generated by private class-dump
//

@class NSString, NLEChangeListener, NSHashTable;

@interface NLENode_OC : NSObject <NLEChangeListenerDelegate> {
    struct shared_ptr<cut::model::NLENode> { struct NLENode *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
    BOOL _hadAddCPPListener;
    NSHashTable *_listenerArray;
    NLEChangeListener *_changeListener;
}

@property (readonly, copy, nonatomic) NSString *dve_nodeId;
@property (copy, nonatomic) NSString *dmt;
@property (retain, nonatomic) NSHashTable *listenerArray;
@property (retain, nonatomic) NLEChangeListener *changeListener;
@property (nonatomic) BOOL hadAddCPPListener;
@property (nonatomic) struct shared_ptr<cut::model::NLENode> { struct NLENode *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isEnable) BOOL enable;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtra:(id)arg0 forKey:(id)arg1;
- (BOOL)isEnable;
- (id)getExtraForKey:(id)arg0;
- (void)removeExtraForKey:(id)arg0;
- (id)dve_nodeId;
- (struct shared_ptr<cut::model::NLENode> { struct NLENode *x0; struct __shared_weak_count *x1; })cppValue;
- (id)deepClone;
- (id)listenerArray;
- (BOOL)isWorkingDirty;
- (void)setListenerArray:(id)arg0;
- (id)deepClone:(BOOL)arg0;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLENode> { struct NLENode *x0; struct __shared_weak_count *x1; })arg0;
- (void)setCppValue:(struct shared_ptr<cut::model::NLENode> { struct NLENode *x0; struct __shared_weak_count *x1; })arg0;
- (BOOL)hadAddCPPListener;
- (void)setHadAddCPPListener:(BOOL)arg0;
- (id)getExtraKeys;
- (void)clearExtra;
- (void)clearExtraRecursively:(id)arg0;
- (void)clearUnnecessaryExtraRecursively:(id)arg0;
- (BOOL)hasExtraForKey:(id)arg0;
- (id)getTransientExtraForKey:(id)arg0;
- (void)setTransientExtra:(id)arg0 forKey:(id)arg1;
- (BOOL)unorderEquals:(id)arg0 compareExtra:(BOOL)arg1;
- (BOOL)unorderEquals:(id)arg0 compareExtra:(BOOL)arg1 ignoreList:(id)arg2;
- (id)nodeClassName;
- (id)dmt;
- (void)setDmt:(id)arg0;
- (id)getValueFromDouyinExtraWithKey:(id)arg0;
- (void)removeListener:(id)arg0;
- (void).cxx_destruct;
- (id)changeListener;
- (unsigned long long)getID;
- (id)UUID;
- (void)setChangeListener:(id)arg0;
- (id)debugDescription;
- (id)hash;
- (void)addListener:(id)arg0;
- (void)setName:(id)arg0;
- (id)getName;
- (void)setEnable:(BOOL)arg0;
- (id).cxx_construct;
- (id)name;
- (void)didChange;
- (id)getUUID;
- (BOOL)equals:(id)arg0;

@end
