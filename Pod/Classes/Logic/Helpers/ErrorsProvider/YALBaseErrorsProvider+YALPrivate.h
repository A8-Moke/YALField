// For License please refer to LICENSE file in the root of YALField project

#import "YALBaseErrorsProvider.h"

@interface YALBaseErrorsProvider (YALPrivate)

+ (NSDictionary<NSString *, NSError *> *)errors;
+ (NSError *)yal_errorWithDescription:(NSString *)description;

@end
