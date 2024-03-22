//
//     Generated by private class-dump
//

@class Protocol;

@interface CKDDTrigger : NSObject <NSCopying> {
    BOOL _async;
    Protocol *_interface;
    SEL _selector;
}

@property (readonly, nonatomic) Protocol *interface;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) BOOL async;

- (id)initWith:(id)arg0 selector:(SEL)arg1;
- (id)initWith:(id)arg0 selector:(SEL)arg1 async:(BOOL)arg2;
- (id)interface;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (BOOL)async;
- (SEL)selector;

@end
