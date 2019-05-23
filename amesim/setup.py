from distutils.core import setup, Extension

module1 = Extension('binding_amecommunication',
					library_dirs = ['C:\\Users\\z003zxuz\\Documents\\Thesis_Code\\MasterThesis\\amesim\\libs'],
					include_dirs = ['C:\\Users\\z003zxuz\\Documents\\Thesis_Code\\MasterThesis\\amesim\\include'],
                    sources = ['binding_amecommunication.c'])

setup (name = 'binding_amecommunication',
       version = '1.0',
       description = 'This is binding_amecommunication package',
       ext_modules = [module1])