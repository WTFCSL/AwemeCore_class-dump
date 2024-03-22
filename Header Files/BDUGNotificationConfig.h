//
//     Generated by private class-dump
//

@class NSSet;

@interface BDUGNotificationConfig : NSObject {
    NSSet *_categories;
    unsigned long long _options;
}

@property (retain, nonatomic) NSSet *categories;
@property (nonatomic) unsigned long long options;

+ (id)configureNotificationWithCategories:(id)arg0 options:(unsigned long long)arg1;

- (id)categories;
- (void).cxx_destruct;
- (void)setCategories:(id)arg0;
- (void)setOptions:(unsigned long long)arg0;
- (unsigned long long)options;

@end