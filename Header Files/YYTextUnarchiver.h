//
//     Generated by private class-dump
//

@class NSString;

@interface YYTextUnarchiver : NSKeyedUnarchiver <NSKeyedUnarchiverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unarchiveObjectWithData:(id)arg0;
+ (id)unarchiveObjectWithFile:(id)arg0;

- (id)init;
- (id)unarchiver:(id)arg0 didDecodeObject:(id)arg1;
- (id)initForReadingWithData:(id)arg0;

@end