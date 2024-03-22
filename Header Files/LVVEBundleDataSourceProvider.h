//
//     Generated by private class-dump
//

@class NSString;

@interface LVVEBundleDataSourceProvider : NSObject {
    Class _performer;
    NSString *_rootPath;
}

@property (retain, nonatomic) Class performer;
@property (copy, nonatomic) NSString *rootPath;

+ (BOOL)checkExitInLocalDataSource:(int)arg0;

- (id)voiceEffectPath;
- (id)taileaderReourcePath;
- (id)taileaderAnimationPath;
- (id)initWithRootPath:(id)arg0;
- (id)videoAjustPathForType:(int)arg0 payloadPath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })arg1 resourceVersion:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })arg2;
- (id)chromaPathWithPayloadPath:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })arg0;
- (id)systemFontFolder;
- (void).cxx_destruct;
- (id)rootPath;
- (Class)performer;
- (void)setPerformer:(Class)arg0;
- (void)setRootPath:(id)arg0;

@end
