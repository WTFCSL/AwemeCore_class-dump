//
//     Generated by private class-dump
//

@class IESECEntranceInfoScene;

@interface IESECEntranceInfoChecker : NSObject {
    BOOL _filterEnable;
    IESECEntranceInfoScene *_scene;
}

@property (retain, nonatomic) IESECEntranceInfoScene *scene;
@property (nonatomic) BOOL filterEnable;

- (id)checkForceRule:(id)arg0;
- (void)checkRequiredPut:(id)arg0;
- (void)checkRequiredRemove:(id)arg0;
- (void)setupFilterEnable;
- (void)checkRequiredOperation:(id)arg0 operation:(unsigned long long)arg1;
- (BOOL)filterEnable;
- (BOOL)checkMajorList:(id)arg0;
- (BOOL)checkDelete:(id)arg0;
- (BOOL)checkPut:(id)arg0 value:(id)arg1;
- (BOOL)checkModify:(id)arg0 toValue:(id)arg1;
- (void)setFilterEnable:(BOOL)arg0;
- (id)initWithScene:(id)arg0;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)scene;

@end