//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEEventContext : NSObject {
    AWEEventContext *_baseContext;
    NSDictionary *_currentAttributes;
}

@property (retain, nonatomic) AWEEventContext *baseContext;
@property (retain, nonatomic) NSDictionary *currentAttributes;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)contextMakeAttributes:(id /* block */)arg0;
+ (id)contextWithBaseContext:(id)arg0;
+ (id)contextMakeBaseAttributes:(id /* block */)arg0;
+ (id)contextWithContext:(id)arg0;

- (id)baseContext;
- (id)makeAttributes:(id /* block */)arg0;
- (void)setBaseContext:(id)arg0;
- (void).cxx_destruct;
- (id)attributes;
- (id)debugDescription;
- (id)currentAttributes;
- (id)updateAttributes:(id /* block */)arg0;
- (void)setCurrentAttributes:(id)arg0;

@end