//
//     Generated by private class-dump
//

@class NSString;

@interface BDSCAlertAction : NSObject {
    NSString *_title;
    id /* block */ _block;
    unsigned long long _actionUse;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) unsigned long long actionUse;

+ (id)actionWithStyle:(unsigned long long)arg0 title:(id)arg1 block:(id /* block */)arg2;

- (unsigned long long)actionUse;
- (void)setActionUse:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setBlock:(id /* block */)arg0;
- (id)title;
- (id /* block */)block;
- (void)setTitle:(id)arg0;

@end
