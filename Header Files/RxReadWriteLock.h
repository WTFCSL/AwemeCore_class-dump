//
//     Generated by private class-dump
//

@class NSString;
@protocol RxLocking;

@interface RxReadWriteLock : NSObject {
    struct SharedPtr<Rx::ReadWriteLock, Rx::ESPMode::Fast> { struct ReadWriteLock *Object; struct SharedReferencer<Rx::ESPMode::Fast> { struct ReferenceControllerBase *ReferenceController; } SharedReferenceCount; } _rwl;
    id<RxLocking> _readLock;
    id<RxLocking> _writeLock;
    NSString *_name;
}

@property (readonly, nonatomic) id<RxLocking> readLock;
@property (readonly, nonatomic) id<RxLocking> writeLock;
@property (readonly, nonatomic) NSString *name;

+ (id)new;

- (id)writeLock;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)arg0;
- (BOOL)isReading;
- (id)debugDescription;
- (id).cxx_construct;
- (id)name;
- (BOOL)isWriting;
- (id)readLock;

@end
